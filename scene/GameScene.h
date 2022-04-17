#pragma once

#include "Audio.h"
#include "DebugText.h"
#include "DirectXCommon.h"
#include "Input.h"
#include "Model.h"
#include "SafeDelete.h"
#include "Sprite.h"
#include "ViewProjection.h"
#include "WorldTransform.h"
#include <DirectXMath.h>

/// <summary>
/// ゲームシーン
/// </summary>
class GameScene {

  public: // メンバ関数
	/// <summary>
	/// コンストクラタ
	/// </summary>
	GameScene();

	/// <summary>
	/// デストラクタ
	/// </summary>
	~GameScene();

	/// <summary>
	/// 初期化
	/// </summary>
	void Initialize();

	/// <summary>
	/// 毎フレーム処理
	/// </summary>
	void Update();

	/// <summary>
	/// 描画
	/// </summary>
	void Draw();

  private: // メンバ変数
	DirectXCommon* dxCommon_ = nullptr;
	Input* input_ = nullptr;
	Audio* audio_ = nullptr;
	DebugText* debugText_ = nullptr;

  private:
	//テクスチャバンドル

	
	uint32_t textureHandle_ = 0;
	//スプライト
	// Sprite* sprite = nullptr;

  private:
	// 3Dモデル
	Model* model_ = nullptr;

  private:
	//ワールドトランスフォーム
	WorldTransform worldTransform_[100];
	//ビュープロジェクション
	ViewProjection viewProjection_;

  private:
	//サウンドデータハンドル
	// uint32t soundDataHandle = 0;
	//音声再生ハンドル
	// uint32t voiceHandle = 0;

  private:
	//値を表示したい変数
	// int32t value = 0;

	//カメラ上方向の角度
	float viewAngle = 0.0f;

	/// <summary>
	/// ゲームシーン用
	/// </summary>
};