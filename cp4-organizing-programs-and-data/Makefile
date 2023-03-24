CXX = g++
CXXFLAGS = -Wall -pedantic

main: main.o grade.o median.o Student_info.o
	$(CXX) $(CXXFLAGS) -o $@ $^

main.o: main.cc grade.h Student_info.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

grade.o: grade.cc median.cc Student_info.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

median.o: median.cc median.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

Student_info.o: Student_info.cc Student_info.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f main main.o grade.o median.o Student_info.o

# DEPS = hellomake.h

# %.o: %.c $(DEPS)
# 	$(CC) -c -o $@ $< $(CFLAGS)

# hellomake: hellomake.o hellofunc.o 
# 	$(CC) -o hellomake hellomake.o hellofunc.o 