using System.Linq;
using UnityEngine;
using UnityEngine.UI;

namespace Unity.RenderStreaming.Samples
{
    class BidirectionalSample : MonoBehaviour
    {
#pragma warning disable 0649
        [SerializeField] private SignalingManager renderStreaming;
        [SerializeField] private RawImage remoteVideoImage;
        [SerializeField] private AudioSource receiveAudioSource;
        [SerializeField] private VideoStreamSender webCamStreamer;
        [SerializeField] private VideoStreamReceiver receiveVideoViewer;
        [SerializeField] private AudioStreamReceiver receiveAudioViewer;
        [SerializeField] private SingleConnection singleConnection;
#pragma warning restore 0649

        private string connectionId;
        private RenderStreamingSettings settings;

        void Awake()
        {
            webCamStreamer.OnStartedStream += id => receiveVideoViewer.enabled = true;

            settings = SampleManager.Instance.Settings;
            if (settings != null)
            {
                webCamStreamer.width = (uint)settings.StreamSize.x;
                webCamStreamer.height = (uint)settings.StreamSize.y;
            }

            receiveVideoViewer.OnUpdateReceiveTexture += texture => remoteVideoImage.texture = texture;

            Start();
            SetUp();
            /*receiveAudioViewer.targetAudioSource = receiveAudioSource;
            receiveAudioViewer.OnUpdateReceiveAudioSource += source =>
            {
                source.loop = true;
                source.Play();
            };*/
        }

        void Start()
        {
            if (renderStreaming.runOnAwake)
                return;
            if (settings != null)
                renderStreaming.useDefaultSettings = settings.UseDefaultSettings;
            if (settings?.SignalingSettings != null)
                renderStreaming.SetSignalingSettings(settings.SignalingSettings);
            renderStreaming.Run();
        }

        private void SetUp()
        {
            if(settings != null)
            {
                receiveVideoViewer.SetCodec(settings.ReceiverVideoCodec);
                webCamStreamer.SetCodec(settings.SenderVideoCodec);
            }

            singleConnection.CreateConnection("123"); //$"{Random.Range(0, 99999):D5}"

        }

        private void HangUp()
        {
            singleConnection.DeleteConnection(connectionId);
            remoteVideoImage.texture = null;
        }
    }
}
