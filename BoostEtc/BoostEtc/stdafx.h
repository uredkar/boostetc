// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once
#pragma warning(disable : 4996)
#include "targetver.h"




//#include <stdio.h>
//#include <tchar.h>
#include <chrono>
#include <ctime>

#define BOOST_TEST_NO_MAIN
#define BOOST_TEST_MODULE tolerance_01




#include <iomanip> // for std::setprecision()
#include <iostream>
#include <boost/timer.hpp>
#include <boost/range/numeric.hpp>
#include <boost/accumulators/accumulators.hpp>
#include <boost/accumulators/statistics/stats.hpp>
#include <boost/accumulators/statistics/mean.hpp>
#include <boost/accumulators/statistics/moment.hpp>
#include <boost/math/constants/constants.hpp>

#include <ql/quantlib.hpp>

using namespace boost::accumulators;
using namespace boost::numeric;
using namespace std;
using namespace QuantLib;
// TODO: reference additional headers your program requires here
