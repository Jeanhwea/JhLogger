// @author: Jeanhwea
// @filename: jhlogger.cpp
#include "jhlogger.h"

JhLogger * jlog = new JhLogger;

JhLogger::JhLogger() :
    m_log_level(JL_NONE)
{

}

JhLogger::~JhLogger()
{

}

void JhLogger::TraceFunc(const char * file, const int line, const char * func)
{
    std::string sfile(file);
    int filename_idx = sfile.find_last_of('\\')+1;
    std::cout << sfile.substr(filename_idx, sfile.length()-filename_idx) << "@" << line << "->" << func << std::endl;
}
