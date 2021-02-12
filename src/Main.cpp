#include "Main.hpp"

#include "sdl/SDL.hpp"
#include "sdl/SDLFile.hpp"

#include "imgui/imgui.h"

void Main::Init()
{
    gui.Init();

    sdl_key_up_callback = [=](uint16_t key)
    {
    };

    sdl_key_down_callback = [=](uint16_t key)
    {
    };
}

void Main::Deinit()
{
    gui.Deinit();
}

void Main::Update()
{
    ImGui::NewFrame();

    ImGui::Begin(
        "Menu",
        NULL,
        ImGuiWindowFlags_AlwaysAutoResize);

    ImGui::End();

    gui.Draw(
        sdl_window_width,
        sdl_window_height);
}
