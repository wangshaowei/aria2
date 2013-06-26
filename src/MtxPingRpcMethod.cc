/**
 *
 *
 */

#include "MtxPingRpcMethod.h"
#include "ValueBase.h"
#include "LogFactory.h"

namespace aria2 {
//namespace mtx {

std::shared_ptr<ValueBase>
MtxPingRpcMethod::process(const rpc::RpcRequest& req,
							   DownloadEngine* e)
{
	std::shared_ptr<String> version;
	std::shared_ptr<ValueBase>& tempParams = req.params_dict->get("version");
	if (tempParams && downcast<String>(tempParams)) {
		version = std::static_pointer_cast<String>(tempParams);
	}

	return String::g("pong");
}

//}	// namespace mtx
}	// namespace aria2



