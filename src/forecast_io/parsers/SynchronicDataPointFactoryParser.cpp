#include "forecast_io/parsers/SynchronicDataPointFactoryParser.hpp"

#include "forecast_io/SynchronicDataPoint.hpp"
#include "forecast_io/factories/SynchronicDataPointFactory.hpp"

namespace forecast_io
{

namespace parsers
{

SynchronicDataPointFactoryParser::SynchronicDataPointFactoryParser(factories::SynchronicDataPointFactory& factory) :
	NotifyingSynchronicDataPointParser(factory),
	factory(factory)
{
}

SynchronicDataPointFactoryParser::~SynchronicDataPointFactoryParser()
{
}


void SynchronicDataPointFactoryParser::parse(json_object* const & pJsonObj)
{
	NotifyingSynchronicDataPointParser::parse(pJsonObj);
	SynchronicDataPoint dataPoint = factory.create();
	// TODO: Finish notification of synchronic datapoint
}

}

}
