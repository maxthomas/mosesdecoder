// $Id: TranslationAnalysis.h 552 2009-01-09 14:05:34Z hieu $

/*
 * also see moses/SentenceStats
 */

#ifndef _TRANSLATION_ANALYSIS_H_
#define _TRANSLATION_ANALYSIS_H_

#include <iostream>
#include "../../moses-chart/src/ChartHypothesis.h"

namespace TranslationAnalysis
{

/***
 * print details about the translation represented in hypothesis to
 * os.  Included information: phrase alignment, words dropped, scores
 */
	void PrintTranslationAnalysis(std::ostream &os, const MosesChart::Hypothesis* hypo);

}

#endif
