#ifndef BAMCleanPLUGIN_H
#define BAMCleanPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class BAMCleanPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "BAMClean";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
