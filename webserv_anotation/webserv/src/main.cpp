#include "../includes/Manager.hpp"
#include "../includes/Utils.hpp"

int main(int argc, char **argv)
{
	Manager manager;	

	try
	{
		string conf = "default";
		if (argc > 2)
			throw(PrintError());
		else if (argc == 2)
			conf = argv[1];
		manager.fileOpen(conf);
		manager.confParsing();
	}
	catch(const exception& e)
	{
		cerr << e.what() << "Too many arguments!π΅βπ«" << endl;
		exit (1);
	}
	manager.composeServer();
	manager.runServer();
//μλ²μμΌ λ«μμ£ΌκΈ°
 	return 0;
}
