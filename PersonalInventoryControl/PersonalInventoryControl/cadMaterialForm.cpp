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
			this->btn_cad_livro->Enabled = false;
			this->btn_cad_mid_filme->Enabled = false;
			this->btn_cad_mid_audio->Enabled = false;
			this->btn_cad_mid_dados->Enabled = false;
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
		this->btn_cad_livro->Enabled = false;
		this->btn_cad_mid_filme->Enabled = false;
		this->btn_cad_mid_audio->Enabled = false;
		this->btn_cad_mid_dados->Enabled = false;
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
		this->btn_cad_livro->Enabled = false;
		this->btn_cad_mid_filme->Enabled = false;
		this->btn_cad_mid_audio->Enabled = false;
		this->btn_cad_mid_dados->Enabled = false;
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
		this->btn_cad_livro->Enabled = false;
		this->btn_cad_mid_filme->Enabled = false;
		this->btn_cad_mid_audio->Enabled = false;
		this->btn_cad_mid_dados->Enabled = false;

		this->tabMaterial->TabPages->Remove(this->tabPageMAudio);
		this->tabMaterial->TabPages->Remove(this->tabPageMDados);
		this->tabMaterial->TabPages->Remove(this->tabPageMFilme);
	}
	
}