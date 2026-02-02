#pragma once

#include "Level/Level.h"
#include "Interface/ICanPlayerMove.h"

class SokobanLevel : public Wanted::Level, public ICanPlayerMove
{
	RTTI_DECLARATIONS(SokobanLevel, Level)

public:
	SokobanLevel();

private:
	// 게임에서 사용할 맵을 로드할 함수
	void LoadMap(const char* filename);

	// Inherited via ICanPlayerMove
	virtual bool CanMove(const Wanted::Vector2& playerPosition, const Wanted::Vector2& nextPosition) override;

	// 게임 클리어 확인 점수
	bool CheckGameClear();

	// 이벤트 함수 오버라이드
	virtual void Draw() override;

private:
	// 획득해야하는 목표 점수
	int targetScore = 0;

	// 게임 클리어 여부를 알려주는 변수
	bool isGameClear = false;
};
