#pragma once
class TransactionTime
{
	struct tm ptm;
	struct tm& operator= (const struct tm& i) { return ptm = i; }
public:
	TransactionTime();
	~TransactionTime();


	struct tm getUTC() { return ptm; }

};

