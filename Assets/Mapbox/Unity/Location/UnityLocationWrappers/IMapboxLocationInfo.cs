namespace Mapbox.Unity.Location
{


	public interface IMapboxLocationInfo
	{

		double latitude { get; }

		double longitude { get; }

		float altitude { get; }

		float horizontalAccuracy { get; }

		float verticalAccuracy { get; }

		double timestamp { get; }
	}
}
