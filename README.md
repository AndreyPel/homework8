# Домашнее задание к работе 8

## Условие задачи

Вычислите для заданного натурального n и действительного х с использованием цикла for значение
$$\sin(x) + \sin^2(x) + \ldots + \sin^n(x)$$

## 1. Алгоритм и блок-схема
### Алгоритм решения
1. **НАЧАЛО**
2. ВВОД n, x
3. Объявление переменных:
  - sin_x = sin(x);
  - power ← sin_x
  - sum   ← 0
  - k     ← 1
4. Цикл  for (int k = 1; k <= n; k++) и его тело:
  - sum  = sum + power;
  - power = power * sin_x;
5. ВЫВОД n, sum
6. **КОНЕЦ**

### Блок-схема
![Screenshot of a comment on a GitHub issue showing an image, added in the Markdown, of an Octocat smiling and raising a tentacle.](https://github.com/AndreyPel/homework8/blob/master/Схема%208.png)

## 2. Реализация программы
![Screenshot of a comment on a GitHub issue showing an image, added in the Markdown, of an Octocat smiling and raising a tentacle.](https://github.com/AndreyPel/homework8/blob/master/Реализация%20программы8.png)

## 3. Результаты работы программы

Введите натуральное n: 5

Введите действительное x: 3

Результат: sin(x) + sin^2(x) + ... + sin^5(x) = 0,164298

## 4. Информация о разработчике
  **Пелагин Андрей Александрович БИЦТ 262******
