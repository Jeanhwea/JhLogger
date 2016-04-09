// @author: Jeanhwea
// @filename: jhlogger.h
#ifndef _JHLOGGER_H_
#define _JHLOGGER_H_
#include <algorithm>
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>

#define JH_FILE __FILE__
#define JH_LINE __LINE__
#define JH_FUNC __FUNCTION__

class JhLogger {
public:
    enum JhLogLevel {
        JL_NONE  = 0,
        JL_DEBUG = 1,
        JL_TRACE = 2,
        JL_INFO  = 3,
        JL_WARN  = 4,
        JL_ERROR = 5,
        JL_FATAL = 6
    };

public:
    JhLogger();
    virtual ~JhLogger();
private:
    JhLogger (const JhLogger &);
    JhLogger & operator=(const JhLogger &);

public:
    void TraceFunc(const char * file, const int line, const char * func);
private:
    enum JhLogLevel m_log_level;
};

extern JhLogger * jlog;

#define  DB_TRACE() jlog->TraceFunc(JH_FILE, JH_LINE, JH_FUNC)

#endif
