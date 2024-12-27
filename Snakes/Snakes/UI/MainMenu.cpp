
#include "MainMenu.h"
#include "Button.h"

MainMenu::MainMenu() {
	//Start = UIfunc::Button({ 450.f, 250.f }, { 100.f, 50.f }, sf::Color::Green);
	//Setting = UIfunc::Button({ 450.f, 370.f }, { 100.f, 50.f }, sf::Color::Green);
	//Exit = UIfunc::Button({ 450.f, 430.f }, { 100.f, 50.f }, sf::Color::Green);

	auto Start = std::make_unique<UIfunc::Button>();
	auto Setting = std::make_unique<UIfunc::Button>();
	auto Exit = std::make_unique<UIfunc::Button>();

	Start->SetPosition({ 450.f, 310.f });
	Setting->SetPosition({ 450.f, 370.f });
	Exit->SetPosition({ 450.f, 430.f });

	Start->SetSize({ 100.f, 50.f });
	Setting->SetSize({ 100.f, 50.f });
	Exit->SetSize({ 100.f, 50.f });


	Start->SetText("Start");
	Setting->SetText("Setting");
	Exit->SetText("Exit");

	Window mainMenuWindow;

	mainMenuWindow.AddComponent(std::move(Start));
	mainMenuWindow.AddComponent(std::move(Setting));
	mainMenuWindow.AddComponent(std::move(Exit));


	windowManager.AddWindow("MainWindow", mainMenuWindow);
	windowManager.SetCurrentWindow("MainWindow");
}


MainMenu::~MainMenu() {}
void MainMenu::Update(sf::RenderWindow& window)
{
	windowManager.Update(window);
	windowManager.Draw(window);



	//Start.Update(window);
	//Setting.Update(window);
	//Exit.Update(window);

	//Start.Draw(window);
	//Setting.Draw(window);
	//Exit.Draw(window);
}

