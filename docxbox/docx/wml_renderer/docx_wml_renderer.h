// Copyright (c) 2020 gyselroth GmbH

#ifndef DOCXBOX_DOCX_WML_RENDERER_DOCX_WML_RENDERER_H_
#define DOCXBOX_DOCX_WML_RENDERER_DOCX_WML_RENDERER_H_

static const char *const kXmlDeclaration =
    "<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"yes\" ?>";

static const char *const kWDocumentLhs =
    "<w:document "
    "xmlns:wpc=\"http://schemas.microsoft.com/office/word/2010/wordprocessingCanvas\" "
    "xmlns:mc=\"http://schemas.openxmlformats.org/markup-compatibility/2006\" "
    "xmlns:o=\"urn:schemas-microsoft-com:office:office\" "
    "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\" "
    "xmlns:m=\"http://schemas.openxmlformats.org/officeDocument/2006/math\" "
    "xmlns:v=\"urn:schemas-microsoft-com:vml\" "
    "xmlns:wp14=\"http://schemas.microsoft.com/office/word/2010/wordprocessingDrawing\" "
    "xmlns:wp=\"http://schemas.openxmlformats.org/drawingml/2006/wordprocessingDrawing\" "
    "xmlns:w10=\"urn:schemas-microsoft-com:office:word\" "
    "xmlns:w=\"http://schemas.openxmlformats.org/wordprocessingml/2006/main\" "
    "xmlns:w14=\"http://schemas.microsoft.com/office/word/2010/wordml\" "
    "xmlns:wpg=\"http://schemas.microsoft.com/office/word/2010/wordprocessingGroup\" "
    "xmlns:wpi=\"http://schemas.microsoft.com/office/word/2010/wordprocessingInk\" "
    "xmlns:wne=\"http://schemas.microsoft.com/office/word/2006/wordml\" "
    "xmlns:wps=\"http://schemas.microsoft.com/office/word/2010/wordprocessingShape\" "
    "mc:Ignorable=\"w14 wp14\">";

static const char *const kWDocumentRhs = "</w:document>";

static const char *const kWBodyLhs = "<w:body>";
static const char *const kWBodyRhs = "</w:body>";

static const char *const kWRunLhs = "<w:r>";
static const char *const kWRunRhs = "</w:r>";

static const char *const kWParagraphLhs = "<w:p>";
static const char *const kWParagraphRhs = "</w:p>";

static const char *const kWTableLhs = "<w:tbl>";
static const char *const kWTableRhs = "</w:tbl>";

class docx_wml_renderer {

};

#endif // DOCXBOX_DOCX_WML_RENDERER_DOCX_WML_RENDERER_H_