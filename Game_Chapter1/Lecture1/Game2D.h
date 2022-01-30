#pragma once

#include "RGB.h" //색상을 결정하는 3가지 숫자
#include "Vector2.h" //2차원에서의 좌표를 표현함
#include "Vector3.h" // 3D ""
#include "Colors.h" //
#include "Timer.h"
#include "DrawFunctions.h"

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <thread>         // std::this_thread::sleep_for
#include <iostream>
#include <vector>
#include <string>
#include <map>

namespace jm
{
	using vec2 = Vector2<float>;
	using vec3 = Vector3<float>;

	class Game2D
	{
	private:
		int width = 640; //그래픽 창의 가로 세로 해상도
		int height = 480;

		GLFWwindow* glfw_window = nullptr; // 창에 대한 포인터

		Timer timer;

		float spf = 1.0f / 60.0f;		 // second(s) per frame

		// control options
		std::map<int, bool> key_status;  // key_id, is_pressed
		std::map<int, bool> mbtn_status; // mouse_button_id, is_pressed
		bool draw_grid = true;

	public:
		Game2D()
		{}

		Game2D(const std::string& _title, const int& _width, const int& _height,
			const bool & use_full_screen = false, const int & display_ix = 0);

		~Game2D();

		Game2D & init(const std::string& _title, const int& _width, const int& _height,
			const bool & use_full_screen = false, const int & display_ix = 0);

		void reportErrorAndExit(const std::string& function_name, const std::string& message);

		bool isKeyPressed(const int& key);
		bool isKeyReleased(const int & key);
		bool isKeyPressedAndReleased(const int& key); //사용자가 키를 눌렀다가 땠는지 확인한다.

		bool isMouseButtonPressed(const int& mbtn);
		bool isMouseButtonReleased(const int& mbtn);
		bool isMouseButtonPressedAndReleased(const int& mbtn);

		vec2 getCursorPos(const bool& screen_coordinates = true);

		float getTimeStep(); 

		void drawGrid();

		void run(); // ★중요

		virtual void update() 
		{
			// draw
			// play sould
			// physics update
			// etc.
		}
	};
}