#pragma once
#include "gameNode.h"
class bsEnemy : public gameNode
{
protected:
	float		_att;
	float		_def;
	
	float		_hp;
	float		_maxHp;
	float		_mp;
	float		_maxMp;

protected:
	float	_prevX, _prevY;
	float	_destX, _destY;

protected:
	bool	_isSelected;
	bool	_isAttack;
	bool	_isDead;

protected:
	image*	_enemyImg;
	int		_currentFrameX;

protected:
	int		_countNotMyTurn;
	int		_countMyTurn;
	int		_countTurnEnd;

protected:
	bool	_isDelay;
	int		_delayCount;

protected:
	TURN_STATE _turnState;

public:
	virtual HRESULT init(void) = 0;
	virtual void release(void) = 0;
	virtual void update(void) = 0;
	virtual void render(void) = 0;

	virtual void myTurnAttack(int playerIndex) = 0;
	virtual void getDmg(int playerAtt) = 0;

	//=============================================================
	//	## enemy ## (접근자 / 설정자)
	//=============================================================
public:
	float getAtt() { return _att; }
	float getDef() { return _def; }
	float getHp() { return _hp; }
	float getMp() { return _mp; }
	image* getImg() { return _enemyImg; }

public:
	void setPrevPos(float x, float y);
	POINT getPrevPos();
	void setDestPos(float x, float y);

public:
	bool getIsAttack() { return _isAttack; }
	void setIsAttack(bool isAttack) { _isAttack = isAttack; }
	void setIsSelected(bool isSelect) { _isSelected = isSelect; }
	bool getIsDead() { return _isDead; }

public:
	TURN_STATE getTurnState() { return _turnState; }

	bsEnemy() {}
	~bsEnemy() {}
};