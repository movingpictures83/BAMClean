#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "BAMCleanPlugin.h"

void BAMCleanPlugin::input(std::string file) {
 inputfile = file;
}

void BAMCleanPlugin::run() {}

void BAMCleanPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "clnb ";
myCommand += " ";
myCommand += inputfile + " ";
myCommand += ">";
myCommand += " ";
myCommand += outputfile + " ";
 system(myCommand.c_str());
}

PluginProxy<BAMCleanPlugin> BAMCleanPluginProxy = PluginProxy<BAMCleanPlugin>("BAMClean", PluginManager::getInstance());
