# Nombre del ejecutable
TARGET = vehiculo

# Directorios
SRC_DIR = src
BIN_DIR = bin

# Archivos fuente y objetos
SRCS = $(SRC_DIR)/vehiculo.cc $(SRC_DIR)/funciones.cc
OBJS = $(SRCS:$(SRC_DIR)/%.cc=$(BIN_DIR)/%.o)

# Compilador y opciones
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

# Regla principal (crear el ejecutable en la carpeta bin)
$(BIN_DIR)/$(TARGET): $(OBJS)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Regla para compilar los archivos objeto en la carpeta bin
$(BIN_DIR)/%.o: $(SRC_DIR)/%.cc
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpiar archivos generados
clean:
	rm -rf $(BIN_DIR)
