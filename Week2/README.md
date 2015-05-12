The 4 c++ files contain some small exercises to get you familiar with pointers and passing by reference. 


Below is the solution for question 7:
```
student(const student& st) {
m_name = new char[strlen(st.m_name)+1];
strcpy(m_name,st.m_name);
m_score = st.m_score;
}

student &operator=(const student &st) {
if(&st != this){
delete [] m_name;
m_name = new char[strlen(st.m_name)+1];
strcpy(m_name, st.m_name);
m_score = st.m_score;
}
return *this;
}
```