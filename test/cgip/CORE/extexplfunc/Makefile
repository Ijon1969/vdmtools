
include makeincl

extexplfunc-%: A.h A.cc
	cp -f A.h icode.h
	${CC} -o $(EXE)  A.cc ${MAIN} ${OPTIONS}

javac-extexplfunc-%: A.java
	${JAVAC} -classpath ${CLASSPATH} A.java ${MAINJAVA}.java  

java-extexplfunc-% : A.class ${MAINJAVA}.class
	${JAVA} -classpath ${CLASSPATH} ${MAINJAVA}

clean: 
	rm -f *~ core *.o *.class

