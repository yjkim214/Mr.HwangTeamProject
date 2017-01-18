#pragma once
#include "bsPlayer.h"

enum class ALEXNOAH_STATE
{
	IDLE,
	ATTACK,
	SKILL,
	DEFENSE, 
	GETDMG,
	DEAD,
	VICTORY, 
	GETAWAY, 
};

class AlexNoah : public bsPlayer
{
private:
	ALEXNOAH_STATE _state;
	int moveX;
public:
	virtual HRESULT init(void);
	virtual void release(void);
	virtual void update(void);
	virtual void render(void);

	virtual void myTurnAttack(int enemyIndex);
	virtual void myTurnSkill(int enemyIndex);
	virtual void myTurnDefense();
	virtual void victoryBattle();
	virtual void getaway();
	virtual void getDmg(float enemyAtt);

	AlexNoah() {}
	~AlexNoah() {}
};