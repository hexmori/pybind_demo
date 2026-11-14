#include <pybind11/pybind11.h>

namespace py = pybind11;

// 一个普通的 C++ 函数
int add(int a, int b) {
    return a + b;
}

std::string greet(const std::string& name) {
    return "Hello, " + name + "!";
}

// 定义 Python 模块，模块名必须和编译出的 .so 文件名一致
PYBIND11_MODULE(example, m) {
    m.doc() = "PyBind11 示例模块";  // 模块文档

    m.def("add", &add, "两数相加",
          py::arg("a"), py::arg("b"));

    m.def("greet", &greet, "打招呼",
          py::arg("name"));
}
