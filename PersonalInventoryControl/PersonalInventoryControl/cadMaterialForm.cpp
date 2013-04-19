#include "StdAfx.h"
#include "cadMaterialForm.h"

void PersonalInventoryControl::cadMaterialForm::selecionaMidAudioTab( bool editando )
{
	if( editando ) 
		{
			this->tabMaterial->TabPages->Remove(this->tabPageLivro);
			this->tabMaterial->TabPages->Remove(this->tabPageMDados);
			this->tabMaterial->TabPages->Remove(this->tabPageMFilme);
		} else 
		{
			this->tabMaterial->Enabled = false;
			this->tabMaterial->TabPages->Remove(this->tabPageLivro);
			this->tabMaterial->TabPages->Remove(this->tabPageMDados);
			this->tabMaterial->TabPages->Remove(this->tabPageMFilme);
		}
}

void PersonalInventoryControl::cadMaterialForm::selecionaMidDadosTab( bool editando )
{
	
	if( editando ) 
	{	
		this->tabMaterial->TabPages->Remove(this->tabPageLivro);
		this->tabMaterial->TabPages->Remove(this->tabPageMAudio);
		this->tabMaterial->TabPages->Remove(this->tabPageMFilme);
	} else 
	{
		this->tabMaterial->Enabled = false;
		this->tabMaterial->TabPages->Remove(this->tabPageLivro);
		this->tabMaterial->TabPages->Remove(this->tabPageMAudio);
		this->tabMaterial->TabPages->Remove(this->tabPageMFilme);
	}

	
}

void PersonalInventoryControl::cadMaterialForm::selecionaMidFilmeTab( bool editando )
{
	if( editando ) 
	{	
		this->tabMaterial->TabPages->Remove(this->tabPageLivro);
		this->tabMaterial->TabPages->Remove(this->tabPageMDados);
		this->tabMaterial->TabPages->Remove(this->tabPageMAudio);
	} else 
	{
		this->tabMaterial->Enabled = false;
		this->tabMaterial->TabPages->Remove(this->tabPageLivro);
		this->tabMaterial->TabPages->Remove(this->tabPageMDados);
		this->tabMaterial->TabPages->Remove(this->tabPageMAudio);
	}
	

}

void PersonalInventoryControl::cadMaterialForm::selecionaLivroTab( bool editando )
{
	
	if( editando ) 
	{	
		this->tabMaterial->TabPages->Remove(this->tabPageMAudio);
		this->tabMaterial->TabPages->Remove(this->tabPageMDados);
		this->tabMaterial->TabPages->Remove(this->tabPageMFilme);
	} else 
	{
		this->tabMaterial->Enabled = false;
		this->tabMaterial->TabPages->Remove(this->tabPageMAudio);
		this->tabMaterial->TabPages->Remove(this->tabPageMDados);
		this->tabMaterial->TabPages->Remove(this->tabPageMFilme);
	}
	
}