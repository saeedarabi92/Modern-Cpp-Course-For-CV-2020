#include <fstream>
#include <iostream>

#include "html_writer.hpp"

int main() {
  std::fstream file;
  html_writer::OpenDocument(file);
  html_writer::AddTitle("Image Browser", file);
  html_writer::AddCSSStyle(R"("style.css")", file);
  html_writer::AddBody(file);
  html_writer::AddRow(file);
  html_writer::AddColumn(file, "000000.png", "data/000000.png", 0.98, true);
  html_writer::AddColumn(file, "000100.png", "data/000100.png", 0.96, false);
  html_writer::AddColumn(file, "000200.png", "data/000200.png", 0.88, false);
  html_writer::CloseRow(file);
  html_writer::AddRow(file);
  html_writer::AddColumn(file, "000300.png", "data/000300.png", 0.87, false);
  html_writer::AddColumn(file, "000400.png", "data/000400.png", 0.80, false);
  html_writer::AddColumn(file, "000500.png", "data/000500.png", 0.79, false);
  html_writer::CloseRow(file);
  html_writer::AddRow(file);
  html_writer::AddColumn(file, "000600.png", "data/000600.png", 0.76, false);
  html_writer::AddColumn(file, "000700.png", "data/000700.png", 0.75, false);
  html_writer::AddColumn(file, "000800.png", "data/000800.png", 0.20, false);
  html_writer::CloseRow(file);
  html_writer::CloseBody(file);
  html_writer::CloseDocument(file);
  return 0;
}