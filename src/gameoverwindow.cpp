#include "gameoverwindow.h"

GameOverWindow::GameOverWindow() {
	m_state = GameOverState::ON;
	m_texture.loadFromFile("assets/GameOver1.png");
	m_sprite.setTexture(m_texture);
	m_background_texture.loadFromFile("assets/back1.jpg");
	m_background_sprite.setTexture(m_background_texture);
	m_button_texture.loadFromFile("assets/Again2.png");
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