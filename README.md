# Pong

Игра Pong, написанная на С++ с использованием библиотеки SFML.

Меню
![screenshot](screenshot/menu.jpg)

Игра
![screenshot](screenshot/game.jpg)

Game Over
![screenshot](screenshot/gameover.jpg)

# Управление

Меню

- Нажмите кнопку Start Game, чтобы запуститься игру.
- Нажмите кнопку Close, чтобы выйти.

Игра

- Нажмите клавишу "A" для перемещения влево.
- Нажмите клавишу "D" для перемещения вправо.
- Нажмите клавишу Tab для выхода в меню.
- Не дайте мячу упасть вниз. Если мяч упадёт вниз, игра будет проиграна.
- При проигрыше появится окно Game Over.

Game Over

- Нажмите кнопку Start New Game для перезапуска игры.
- Нажмите клавишу Tab для выхода в меню.


# Требования
1. Скачать и установить vcpkg:
```markdown
git clone https://github.com/microsoft/vcpkg.git
cd vcpkg
bootstrap-vcpkg.bat
vcpkg integrate install
```

3. Скачать и установить CMake

4. Скачать SFML:
```markdown
vcpkg install sfml:x64-windows
```

6. Клонировать репозиторий:
```markdown
git clone https://github.com/nKadykov/pong_project.git
```

8. Создать папку с проектом:
```markdown
mkdir build
cd build
```

10. Собрать проект:
```markdown
cmake .. -DCMAKE_TOOLCHAIN_FILE=C:/path/to/vcpkg/scripts/buildsystems/vcpkg.cmake
```
Заменить C:/path/to/vcpkg на путь к vcpkg
```markdown
cmake --build
```
