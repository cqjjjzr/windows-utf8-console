#pragma once

#include <string_view>
#include <iomanip>

/// <summary>
/// Initialize UTF-8 reading/writing in console.
///
/// Current this only affects Windows system, setting console
/// code page and replacing streambuf of cin to support UTF-8.
/// </summary>
void initialize_utf8_console();

/// <summary>
/// setw I/O stream manipulator replacement for UTF-8 string,
/// will handle character width properly (hopefully).
/// </summary>
decltype(std::setw(0)) setw_u8(int w, std::string_view u8s);