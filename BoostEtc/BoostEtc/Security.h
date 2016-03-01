#pragma once
class Security
{
public:
	Security();
	~Security();
};


class Stock : Security
{

};

class Bond : Security
{

};

class Derivative : Security
{

};

class Swap : Derivative
{

};