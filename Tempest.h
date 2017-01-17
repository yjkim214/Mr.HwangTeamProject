#pragma once
#include "bsPlayer.h"

enum class TEMPEST_STATE
{
	IDLE,
	ATTACK,
	SKILL,
	GETDMG,
	DEAD,
};

class Tempest : public bsPlayer
{
private:
	TEMPEST_STATE _state;

public:
	virtual HRESULT init(void);
	virtual void release(void);
	virtual void update(void);
	virtual void render(void);

	virtual void myTurnAttack(int enemyIndex);
	virtual void myTurnSkill(int enemyIndex);
	virtual void getDmg(int enemyAtt);
	virtual bullet* getBullet() { return _bullet; }

	Tempest() {}
	~Tempest() {}
};