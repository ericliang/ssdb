/* codis */
#include "serv.h"
#include "net/proc.h"
#include "net/server.h"

int proc_config(NetworkServer *net, Link *link, const Request &req, Response *resp){
	SSDBServer *serv = (SSDBServer *)net->data;
	CHECK_NUM_PARAMS(3);
	CHECK_KV_KEY_RANGE(1);

	std::string operate = req[1].String();
	strtolower(&operate);
	std::string key = req[2].String();
	strtolower(&key);	
	if (operate == "get")
	{
		resp->push_back("ok");
		resp->push_back(key);
		resp->push_back("0");
	}else{
		resp->push_back("error");
	}
	return 0;
}

int proc_slotshashkey(NetworkServer *net, Link *link, const Request &req, Response *resp){
	return 0;
}

int proc_slotsinfo(NetworkServer *net, Link *link, const Request &req, Response *resp){
	return 0;
}

int proc_slotsdel(NetworkServer *net, Link *link, const Request &req, Response *resp){
	return 0;
}

int proc_slotsmgrtslot(NetworkServer *net, Link *link, const Request &req, Response *resp){
	return 0;
}

int proc_slotsmgrtone(NetworkServer *net, Link *link, const Request &req, Response *resp){
	return 0;
}

int proc_slotsmgrttagslot(NetworkServer *net, Link *link, const Request &req, Response *resp){
	return 0;
}

int proc_slotsmgrttagone(NetworkServer *net, Link *link, const Request &req, Response *resp){
	return 0;
}

int proc_slotsrestore(NetworkServer *net, Link *link, const Request &req, Response *resp){
	return 0;
}
