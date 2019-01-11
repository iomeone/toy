#include <util/Api.h>
#include <emscripten/bind.h>

using namespace emscripten;

EMSCRIPTEN_BINDINGS(toy_util)
{
    
    // Enums
    
    // Sequences
    
    // Arrays
    
    // Structs
    
    // Classes
    class_<toy::Procedure>("Procedure")
        ;
    class_<toy::ProcedureType>("ProcedureType")
        .property("type", &toy::ProcedureType::type)
        .property("index", &toy::ProcedureType::index)
        .property("name", &toy::ProcedureType::name)
        ;
    
    // Functions
    
}
