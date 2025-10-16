# Имя исполняемого файла
TARGET = Colorizer

# Компилятор и флаги
CC = gcc
CFLAGS = -O2

# Исходный файл
SRC = main.c

# Цель по умолчанию
all: $(TARGET)

# Сборка
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $<

# Очистка
clean:
	rm -f $(TARGET)
