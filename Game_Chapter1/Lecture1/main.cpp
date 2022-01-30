#include "Game2D.h"
#include "PrimitivesGallery.h"
#include "TankExample.h"
#include "FaceExample.h"
#include "WalkingPerson.h"
#include "SolarSystem.h"

//namespace jm
//{
//	class SolarSystem : public Game2D
//	{
//	public:
//		float time = 0;
//
//		void update() override
//		{
//			setLineWidth(3.0f);
//
//			rotate(time * 90.0f);
//			translate(0.5f, 0.0f);
//			rotate(time * 90.0f);
//			scale(2.0f, 0.25f);
//			drawWiredBox(Colors::gold, 0.5f, 0.5f);
//
//			time += this->getTimeStep();
//		}
//	};
//}

int main(void)
{
	//jm::TransformationsExample().run();
	//jm::Game2D().init("This is my digital canvas!", 1280, 960, false).run();
	//jm::RotatingStarExample().init("Rotating Star Example", 1280, 960, true, 1).run(); // 풀스크린
	//jm::PrimitivesGallery().init("Primitive Gallery", 1280, 960, false).run();
	jm::SolarSystem().run();
	//jm::FaceExample().run();
	//jm::WalkingPerson().run();
	//jm::TankExample().run();

	return 0;
}
