#include "HeadRing.h"

THeadRing::THeadRing()
{
	InsLast();
	pHead = pFirst;
	ListLen = 0;
	pStop = pHead;
	Reset();
	pFirst->SetNextLink(pFirst);
}

THeadRing::~THeadRing()
{
	DelLink(pHead);
	pHead = NULL;
}

void THeadRing::InsFirst(PTDatValue pVal)
{
	TDatList::InsFirst(pVal);
	pHead->SetNextLink(pFirst);
}

void THeadRing::DelFirst(void)
{
	TDatList::DelFirst();
	pHead->SetNextLink(pFirst);
}
