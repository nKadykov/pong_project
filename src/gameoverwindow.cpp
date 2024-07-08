#include "gameoverwindow.h"

GameOverWindow::GameOverWindow() {
	m_state = GameOverState::ON;
	if(!m_texture.loadFromFile("assets/gameover1.png"))
		exit(1);
	m_sprite.setTexture(m_texture);
	if(!m_background_texture.loadFromFile("assets/back1.jpg"))
		exit(1);
	m_background_sprite.setTexture(m_background_texture);
	if(!m_button_texture.loadFromFile("assets/again2.png"))
		exit(1);
	m_button_sprite.setTexture(m_button_texture);
}

void GameOverWindow::setPosition(float positionX, float positionY) {
	m_sprite.setPosition(positionX, positionY);
	m_button_sprite.setPosition(420, 400);
}

GameOverState GameOverWindow::getState() {
	return m_state;
}

void GameOverWindow::setState(GameOverState state) {
	m_state = state;
}

void GameOverWindow::draw(sf::RenderWindow& window) {
	m_state = GameOverState::ON;
	window.clear();

	Button button(420, 400, m_button_texture);
	if (button.isPushed(window)) {
		m_state = GameOverState::OFF;
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Tab)) {
		m_state = GameOverState::MENU;
	}

	window.draw(m_background_sprite);
	window.draw(m_sprite);
	button.draw(window);
}