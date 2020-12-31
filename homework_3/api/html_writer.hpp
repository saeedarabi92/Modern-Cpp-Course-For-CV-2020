// @file      html_writer.h
// @author    Ignacio Vizzo     [ivizzo@uni-bonn.de]
//
// Copyright (c) 2020 Ignacio Vizzo, all rights reserved
#ifndef HTML_WRITER_H_
#define HTML_WRITER_H_

#include <fstream>
#include <string>

namespace html_writer {

/**
 * @brief OpenDocument() will print to the standard output the begining of a
 * HTML5 file. This function should be called only once at the begining of your
 * test program.
 */
void OpenDocument();
/**
 * @brief CloseDocument() will close the HTML5 file, this function should be
 * called only once at the end of your test program.
 */
void CloseDocument();

/**
 * @brief To make your application look nicer, you could opt for providing a
 * stylesheet using CSS for your web application.
 *
 * @param stylesheet The path where the CSS file is located, typically
 * "<path>/style.css"
 */
void AddCSSStyle(const std::string& stylesheet);

/**
 * @brief This function adds a Title to your web application
 *
 * @param title The string containing the title, could be as long as you wish.
 */
void AddTitle(const std::string& title);

// Initiate the body
void AddBody();

// Close the body
void CloseBody();

// Initiate the row
void AddRow();

// Close the row
void CloseRow();

// Add the column
void AddColumn(const std::string& imagename, const std::string& imagesrc,
               const float& imagescore, const bool& style);

}  // namespace html_writer

#endif  // HTML_WRITER_H_
