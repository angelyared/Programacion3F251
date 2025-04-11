PROYECTO := programa
LIB := -lftxui-screen -lftxui-dom -lftxui-component
CXX := c++
INCLUDE := -Iinclude
EXE := bin/$(PROYECTO)

$(EXE): src/main.cpp
	$(CXX) $< -o $@ $(LIB) $(INCLUDE) -std=c++17

run: $(EXE)
	./$<

archivo: bin/archivo
	./$<

bin/archivo: src/archivo.cpp
	$(CXX) $< -o $@ -std=c++17
