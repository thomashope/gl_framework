#ifndef PLAYER_H
#define PLAYER_H

#include <system/singleton.h>
#include <system/camera.h>

class Player : public Singleton
{
public:
	Player();
	~Player() {}

	bool init();
	void shutdown();

	static Player* get() { return self_; }

	void update( float dt );
	void moveBackward();
	void moveForward();
	void moveRight();
	void moveLeft();

	// Setters
	void setMoveSpeed( float forwardBack, float leftRight, float upDown );
	void setRotateSpeed( float horizontal, float vertical );

	// Getters
	Camera* camera() { return &camera_; }
	glm::vec3 position() { return camera_.position(); }
	glm::vec3 velocity() { return vel_; }
	glm::vec3 direction() { return camera_.direction(); }

protected:
	static Player* self_;

	void updateAudioListener();

	Camera camera_;
	InputManager* input_;

	glm::vec3 vel_; // Velocity (units/second) 
	float horizontal_rotate_speed_;
	float vertical_rotate_speed_;
	float vertical_move_speed_;
	float forward_move_speed_;
	float strafe_move_speed_;
};

#endif