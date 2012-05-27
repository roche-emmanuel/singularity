/*
The MIT License

Copyright (c) 2007-2010 Aidin Abedi http://code.google.com/p/shinyprofiler/

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

#ifndef SHINY_OUTPUT_H
#define SHINY_OUTPUT_H

#include "ShinyNode.h"
#include "ShinyZone.h"

#include <stdio.h>

#if SHINY_COMPILER == SHINY_COMPILER_MSVC
#	pragma warning(disable: 4996)
#	define snprintf		_snprintf
#	define TRAILING		0

#else
#	define TRAILING		1
#endif

#if SHINY_IS_COMPILED == TRUE

/*---------------------------------------------------------------------------*/

#define OUTPUT_WIDTH_CALL	6
#define OUTPUT_WIDTH_TIME	6
#define OUTPUT_WIDTH_PERC	4
#define OUTPUT_WIDTH_SUM	79

#define OUTPUT_WIDTH_DATA	(1+OUTPUT_WIDTH_CALL + 1 + 2*(OUTPUT_WIDTH_TIME+4+OUTPUT_WIDTH_PERC+1) + 1)
#define OUTPUT_WIDTH_NAME	(OUTPUT_WIDTH_SUM - OUTPUT_WIDTH_DATA)


/*---------------------------------------------------------------------------*/


/*---------------------------------------------------------------------------*/

SHINY_API int ShinyPrintNodesSize(uint32_t a_count);
SHINY_API int ShinyPrintZonesSize(uint32_t a_count);

SHINY_API void ShinyPrintANode(char* output, const ShinyNode *a_node, const ShinyNode *a_root);
SHINY_API void ShinyPrintAZone(char* output, const ShinyZone *a_zone, const ShinyZone *a_root);

SHINY_API void ShinyPrintNodes(char* output, const ShinyNode *a_root);
SHINY_API void ShinyPrintZones(char* output, const ShinyZone *a_root);


/*---------------------------------------------------------------------------*/

#if __cplusplus
} /* end of extern "C" */
#include <string>


#if 1
// advanced convertion to a string:
#include <vector>
#include <sstream>
#include <iomanip>

typedef std::vector<std::string> StringVector;

SHINY_INLINE std::string concatenateStrings(StringVector& strings) {
	std::string result;
	uint32_t len = 0;

	for(StringVector::iterator it = strings.begin(); it != strings.end(); ++it) {
		len += (*it).length();
	}

	result.reserve(len);

	for(StringVector::iterator it = strings.begin(); it != strings.end(); ++it) {
		result += (*it);
	}

	return result;
}

SHINY_INLINE void printHeader(StringVector& strings, const char *a_title) {
	std::ostringstream os;

	os.flags(std::ios::right);
	os.width(OUTPUT_WIDTH_CALL);
	os << "calls";
	os.width(OUTPUT_WIDTH_TIME+4+OUTPUT_WIDTH_PERC+1);
	os << "self time";
	os.width(OUTPUT_WIDTH_TIME+4+OUTPUT_WIDTH_PERC+1);
	os << "total time";
	os.width(OUTPUT_WIDTH_TIME+4+OUTPUT_WIDTH_PERC+1);
	os << "avg time";
	os.width(OUTPUT_WIDTH_NAME+1);
	os << a_title;
	os << std::endl;

	strings.push_back(std::string(os.str()));
}

SHINY_INLINE void printData(StringVector& strings, const ShinyData *a_data, float a_topercent) {
	float totalTicksAvg = ShinyData_totalTicksAvg(a_data);
	const ShinyTimeUnit *selfUnit = ShinyGetTimeUnit(a_data->selfTicks.avg);
	const ShinyTimeUnit *totalUnit = ShinyGetTimeUnit(totalTicksAvg);

	float avgTicks = a_data->selfTicks.avg/a_data->entryCount.avg;
	const ShinyTimeUnit *avgUnit = ShinyGetTimeUnit(avgTicks);

	using namespace std;

	std::ostringstream os;
	os.flags(std::ios::right);
	os << fixed;
	os << setw(OUTPUT_WIDTH_CALL) << setprecision(0) << a_data->entryCount.avg << setw(0) << " ";
	os << setw(OUTPUT_WIDTH_TIME) << setprecision(0) << a_data->selfTicks.avg * selfUnit->invTickFreq << setw(0) << " " << setw(2) << selfUnit->suffix << setw(0) << " ";
	os << setw(OUTPUT_WIDTH_PERC) << setprecision(0) << a_data->selfTicks.avg * a_topercent << setw(0) << "% ";
	os << setw(OUTPUT_WIDTH_TIME) << setprecision(0) << totalTicksAvg * totalUnit->invTickFreq << setw(0) << " " << setw(2) << totalUnit->suffix << setw(0) << " ";
	os << setw(OUTPUT_WIDTH_PERC) << setprecision(0) << totalTicksAvg * a_topercent << setw(0) << "% ";
	os << setw(OUTPUT_WIDTH_TIME+4) << setprecision(2) << avgTicks * avgUnit->invTickFreq << setw(0) << " " << setw(2) << avgUnit->suffix << setw(0) << " ";

	strings.push_back(std::string(os.str()));
}

SHINY_INLINE void printNode(StringVector& strings, const ShinyNode *a_node, float a_topercent) {
	int offset = a_node->entryLevel; // * 2;

	printData(strings, &a_node->data, a_topercent);
	strings.push_back(std::string(offset,' ')+std::string(a_node->zone->name)+"\n");
}

SHINY_INLINE void ShinyPrintNodesVector(StringVector& strings, const ShinyNode *a_root, uint32_t depth) {
	float fTicksToPc = 100.0f / a_root->data.childTicks.avg;
	const ShinyNode *node = a_root;

	printHeader(strings, "call tree");

	for (;;) {
		if(node->entryLevel <= depth) {
			printNode(strings, node, fTicksToPc);
		}

		node = ShinyNode_findNextInTree(node);
		if (!node) {
			return;
		}
	}
}

SHINY_INLINE void printZone(StringVector& strings, const ShinyZone *a_zone, float a_topercent) {
	printData(strings, &a_zone->data, a_topercent);
	strings.push_back(std::string(a_zone->name)+"\n");
}

SHINY_INLINE void ShinyPrintZonesVector(StringVector& strings, const ShinyZone *a_root, uint32_t count) {
	float fTicksToPc = 100.0f / a_root->data.childTicks.avg;
	const ShinyZone *zone = a_root;

	printHeader(strings, "sorted list");

	uint32_t total = 0;

	for (;;) {
		++total;
		printZone(strings, zone, fTicksToPc);

		zone = zone->next;
		if (!zone || total>=count) {
			return;
		}
	}
}

SHINY_INLINE std::string ShinyNodesToString(const ShinyNode *a_root, uint32_t a_count) {
	StringVector strings;

	ShinyPrintNodesVector(strings, a_root, a_count);
	return concatenateStrings(strings);
}

SHINY_INLINE std::string ShinyZonesToString(const ShinyZone *a_root, uint32_t a_count) {
	StringVector strings;

	ShinyPrintZonesVector(strings, a_root, a_count);
	return concatenateStrings(strings);
}

#else
SHINY_INLINE std::string ShinyNodesToString(const ShinyNode *a_root, uint32_t a_count) {
	std::string str;
	str.resize(ShinyPrintNodesSize(a_count) - 1);
	ShinyPrintNodes(&str[0], a_root);
	return str;
}

SHINY_INLINE std::string ShinyZonesToString(const ShinyZone *a_root, uint32_t a_count) {
	std::string str;
	str.resize(ShinyPrintZonesSize(a_count) - 1);
	ShinyPrintZones(&str[0], a_root);
	return str;
}
#endif

extern "C" { /* end of c++ */
#endif

#endif /* if SHINY_IS_COMPILED == TRUE */

#endif /* end of include guard */
