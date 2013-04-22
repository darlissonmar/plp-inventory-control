// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
#pragma once

#define COD_CADASTRAR 1
#define COD_EDITAR 2
#define COD_VISUALIZAR 3


#define COD_LIVRO 1
#define COD_AUDIO 2
#define COD_DADOS 3
#define COD_FILME 4

#define COD_RELATORIO_AMIGO 1
#define COD_RELATORIO_MATERIAL 2
#define COD_RELATORIO_EMPRESTIMO 3


#include "Amigo.h"
#include "EnumTipoMidia.h"
#include "Livro.h"
#include "Material.h"
#include "MidiaAudio.h"
#include "MidiaDados.h"
#include "MidiaFilme.h"
#include "Emprestimo.h"
#include "DataBase.h"
#include "ICrud.h"
#include "ControllerAmigo.h"
#include "ControllerEmprestimo.h"
#include "ControllerLivro.h"
#include "ControllerMidiaAudio.h"
#include "ControllerMidiaFilme.h"
#include "ControllerMidiaDados.h"


#include "AboutForm.h"
#include "String_utils.h"
#include "buscar_material_form.h"
#include "Busca_amigo_form.h"
#include "cadMaterialForm.h"
#include "EmprestimoForm.h"
#include "gerenciarAmigosForm.h"
#include "cadAmigoForm.h"
#include "gerenciarEmprestimosForm.h"
#include "gerenciarMateriaisForm.h"
#include "form_relatorios.h"



// TODO: reference additional headers your program requires here
