#include "StdAfx.h"
#include "cadMaterialForm.h"

void PersonalInventoryControl::cadMaterialForm::selecionaMidAudioTab( void )
{
	this->tabMaterial->TabPages->Remove(this->tabPageLivro);
	this->tabMaterial->TabPages->Remove(this->tabPageMDados);
	this->tabMaterial->TabPages->Remove(this->tabPageMFilme);
}

void PersonalInventoryControl::cadMaterialForm::selecionaMidDadosTab( void )
{
	this->tabMaterial->TabPages->Remove(this->tabPageLivro);
	this->tabMaterial->TabPages->Remove(this->tabPageMAudio);
	this->tabMaterial->TabPages->Remove(this->tabPageMFilme);
}

void PersonalInventoryControl::cadMaterialForm::selecionaMidFilmeTab( void )
{
	this->tabMaterial->TabPages->Remove(this->tabPageLivro);
	this->tabMaterial->TabPages->Remove(this->tabPageMDados);
	this->tabMaterial->TabPages->Remove(this->tabPageMAudio);
}

void PersonalInventoryControl::cadMaterialForm::selecionaLivroTab( void )
{
	this->tabMaterial->TabPages->Remove(this->tabPageMAudio);
	this->tabMaterial->TabPages->Remove(this->tabPageMDados);
	this->tabMaterial->TabPages->Remove(this->tabPageMFilme);
}