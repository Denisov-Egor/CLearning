cat > README.md <<'EOF'
# C Programming

Моё обучение языку программирования C на стандарте C23.

## Цели

- Изучить язык C и его фундаментальные механизмы.
- Понять устройство программ на низком уровне.
- Освоить системное программирование под Linux.
- Научиться разрабатывать самостоятельные проекты.

## Environment

- OS: Arch Linux
- Language: C
- Standard: C23
- Compiler: GCC
- Additional compiler: Clang
- Debugger: GDB
- Build system: Make

## Structure

| Directory | Description |
|---|---|
| `00-fundamentals` | Основы языка и окружение |
| `01-types` | Типы данных |
| `02-control-flow` | Управление потоком выполнения |
| `03-functions` | Функции |
| `04-arrays-and-strings` | Массивы и строки |
| `05-pointers` | Указатели |
| `06-dynamic-memory` | Динамическая память |
| `07-user-defined-types` | Пользовательские типы |
| `08-modules-and-build` | Модули и сборка |
| `09-standard-library` | Стандартная библиотека |
| `10-file-io` | Файловый ввод-вывод |
| `11-advanced-c` | Продвинутые возможности C |
| `12-linux-system-programming` | Системное программирование Linux |
| `projects` | Практические проекты |

## Compilation

```bash
gcc -std=c23 -Wall -Wextra -Wpedantic main.c -o program
./program