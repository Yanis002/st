#pragma once

#define EUR 0
#define JP 1
#define USA 2

#ifndef VERSION
#error "VERSION is not defined, check configure.py!"
#endif

#define IS_EUR (VERSION == EUR)
#define IS_JP (VERSION == JP)
#define IS_USA (VERSION == USA)
