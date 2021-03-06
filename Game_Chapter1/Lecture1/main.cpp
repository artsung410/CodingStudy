#include "Game2D.h"
#include "PrimitivesGallery.h"
#include "TankExample.h"
#include "FaceExample.h"
#include "WalkingPerson.h"
#include "SolarSystem.h"

namespace jm
{
	class MouseExample : public Game2D
	{
	public:
		void update() override
		{
			const vec2 mouse_pos = getCursorPos(true);

			if (isMouseButtonPressed(GLFW_MOUSE_BUTTON_1))
			{
				translate(mouse_pos);
				drawFilledCircle(Colors::gold, 0.1f);
			}

			if (isMouseButtonPressed(GLFW_MOUSE_BUTTON_2))
			{
				translate(mouse_pos);
				drawFilledCircle(Colors::red, 0.1f);
			}

		}
	};
}

int main(void)
{
	jm::MouseExample().init("This is my digital canvas!", 1000, 1000, false).run();
	//jm::TransformationsExample().run();
	//jm::Game2D().init("This is my digital canvas!", 1280, 960, false).run();
	//jm::RotatingStarExample().init("Rotating Star Example", 1280, 960, true, 1).run(); // 풀스크린
	//jm::PrimitivesGallery().init("Primitive Gallery", 1280, 960, false).run();
	//jm::SolarSystem().run();
	//jm::FaceExample().run();
	//jm::WalkingPerson().run();
	//jm::TankExample().run();

	return 0;
}
