#include "PlayerBullet.h"

void PlayerBullet::Initialize(Model* model, const Vector3& position, const Vector3& velocity)
{
	assert(model);

	model_ = model;
	//�e�N�X�`���ǂݍ���
	textureHandle_ = TextureManager::Load("mario.jpg");

	//���[���h�g�����X�t�H�[���̏�����
	worldTransform_.Initialize();

	//�����Ŏ󂯎�����������W���Z�b�g
	worldTransform_.translation_ = position;

	//�����Ŏ󂯎�������x�������o�֐��ɑ��
	velocity_ = velocity;
}

void PlayerBullet::Update()
{
	afin::Afin(worldTransform_);
	worldTransform_.TransferMatrix();

	//���W���ړ�������(1�t���[�����̈ړ��ʂ𑫂�����)
	worldTransform_.translation_ += velocity_;

}

void PlayerBullet::Draw(const ViewProjection& viewProjection_)
{
	model_->Draw(worldTransform_, viewProjection_, textureHandle_);
}
