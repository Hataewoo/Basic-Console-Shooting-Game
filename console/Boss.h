#pragma once

class CBoss : public CUnit
{
public:
	CBoss();
	~CBoss();

	int BossUI[10][21] =
	{
			{0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0},
			{0,1,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,1,0},
			{0,1,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,1,0},
			{0,1,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,1,0},
			{0,1,0,0,0,0,1,1,0,0,1,0,0,1,1,0,0,0,0,1,0},
			{0,1,0,0,1,1,1,0,0,0,1,0,0,0,1,1,1,0,0,1,0},
			{0,1,1,1,0,0,1,0,0,0,1,0,0,0,1,0,0,1,1,1,0},
			{0,1,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,1,0},
			{0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0}
	};

	virtual void Update();
	virtual void Move();
	virtual void Clipping();
	void Create();
	void Death();
	void DamagedEffect();

private:

};