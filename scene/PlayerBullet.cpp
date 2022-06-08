#include "PlayerBullet.h"

void PlayerBullet::Initialize(Model* model, const Vector3& position)
{
	assert(model);
	//テクスチャ読み込み
	textureHandle_ = TextureManager::Load("black.png");

	//ワールドトランスフォームの初期化
	worldTransform_.Initialize();

	//引数で受け取った初期座標をセット
	worldTransform_.translation_ = position;
}

void PlayerBullet::Update()
{
}

void PlayerBullet::Draw(const ViewProjection& viewProjection_)
{
}
