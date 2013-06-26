/**
 *
 *
 */

#include "MtxNetMappingCommand.h"
#include "DownloadEngine.h"
#include "RequestGroupMan.h"
#include "LogFactory.h"
#include "Logger.h"
#include "fmt.h"



namespace aria2 {
//namespace mtx {

MtxNetMappingCommand::MtxNetMappingCommand(cuid_t cuid,
		DownloadEngine* e,
		int port) : TimeBasedCommand(cuid, e, 30, true), port_(port)
{}

void MtxNetMappingCommand::preProcess()
{
	if(getDownloadEngine()->getRequestGroupMan()->downloadFinished() ||
			getDownloadEngine()->isHaltRequested()) {
		enableExit();
	}
}



void MtxNetMappingCommand::process()
{
	A2_LOG_DEBUG(fmt("Do Network Mapping on port: %d", port_));
}

void MtxNetMappingCommand::postProcess()
{

}





//} // namespace mtx
} // namespace aria2
