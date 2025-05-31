TARGET=output

CXX=g++

FILES= ADT/Mors.cpp ADT/Message.cpp main.cpp

build:
	$(CXX) $(FILES) -o $(TARGET) 
run: build
	./$(TARGET)
